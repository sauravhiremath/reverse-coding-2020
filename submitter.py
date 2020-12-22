import requests
import sys
import json


url = "https://backend-portal.acmvit.in/judge"

payload = {
    "problemID": "d4eab63c-492d-49c7-a75e-71030354755d",   # UUID here
    "teamID": 39,   
    "language": "py", # cpp, c, java, py
    "code": "dCA9IGludChpbnB1dCgpKQoKZm9yIF8gaW4gcmFuZ2UodCk6CiAgICBudW0gPSBsaXN0KGJpbihpbnQoaW5wdXQoKSkpKVsyOl0KICAgIAogICAgaWYgbnVtLmNvdW50KCcxJykgJSAyID09IDA6CiAgICAgICAgcHJpbnQoMCkKICAgIGVsc2U6CiAgICAgICAgcHJpbnQoMSk=" #base64 format code
}

headers = {
  'Authorization': 'Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ0ZWFtIjp7ImlkIjozOSwibmFtZSI6InBob3NwaG9ydXMifSwicGFydGljaXBhbnQiOnsiZ29vZ2xlSUQiOiI5OTk5OTk5OTk5OTk5OTk5OSIsIm5hbWUiOiJQaG9zcGhvcnVzIG1lbWJlciIsImlzQWRtaW4iOmZhbHNlfSwiaWF0IjoxNjA4MzAyMjkzLCJleHAiOjE2MDgzODg2OTMsImlzcyI6ImhlcGhhZXN0dXMifQ.dGPFAKEak7r5a5jlVmAyYX_iElT1jdkZrwkzkla-qIo', # signed and verified auth bearer
  'Origin': 'https://reverse-coding-2dff1.web.app',
  'Content-Type': 'application/json',
}

judgeIdResponse = requests.request("POST", url, headers=headers, data=json.dumps(payload))

if judgeIdResponse.status_code != 200 and judgeIdResponse.status_code != 201:
    print(judgeIdResponse.text)
    sys.exit("judgeId not found")

print(judgeIdResponse.json())
submissionToken = judgeIdResponse.json()['submissionToken']
print(judgeIdResponse.json()['submissionToken'])

judgeUrl = "https://backend-portal.acmvit.in/judge/" + submissionToken

reponse = requests.request("GET", url, headers=headers)

if reponse.status_code != 200:
    sys.exit("submission broke!")

print(reponse.json())