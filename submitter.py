import requests
import sys
import json


url = "https://backend-portal.acmvit.in/judge"

payload = {
    "problemID": "d4eab63c-492d-49c7-a75e-71030354755d",   
    "teamID": 39,   
    "language": "py", 
    "code": "dCA9IGludChpbnB1dCgpKQoKZm9yIF8gaW4gcmFuZ2UodCk6CiAgICBudW0gPSBsaXN0KGJpbihpbnQoaW5wdXQoKSkpKVsyOl0KICAgIAogICAgaWYgbnVtLmNvdW50KCcxJykgJSAyID09IDA6CiAgICAgICAgcHJpbnQoMCkKICAgIGVsc2U6CiAgICAgICAgcHJpbnQoMSk="
}

headers = {
  'Authorization': 'Bearer eyJhbGciOiJIUzI1NiIsInR5cCI6IkpXVCJ9.eyJ0ZWFtIjp7ImlkIjozOSwibmFtZSI6InBob3NwaG9ydXMifSwicGFydGljaXBhbnQiOnsiZ29vZ2xlSUQiOiIxMDExMjg5NDUwNzU3MDQ5NjU3NDYiLCJuYW1lIjoiU2F1cmF2IEhpcmVtYXRoIiwiaXNBZG1pbiI6dHJ1ZX0sImlhdCI6MTYwODMwMjI5MywiZXhwIjoxNjA4Mzg4NjkzLCJpc3MiOiJoZXBoYWVzdHVzIn0.Kf3ZywktEe8tuSnA9QjNftOKSDOBvUW95GKxhZ6iPW0',
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