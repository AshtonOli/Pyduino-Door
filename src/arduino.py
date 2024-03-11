import requests
import datetime as dt
# class ntfyRequest:
#     def __init__(self) -> None:
#         pass

#     def tap(self) -> None:
#         requests.post(
#             "https://ntfy.sh/b2FGcm9udERvb3JTZXJ2ZXI",
#             f"Tap detected on front door @ {dt.datetime.now()}".encode(encoding='utf-8')
#         )

def motion() -> None:
    requests.post(
        "https://ntfy.sh/b2FGcm9udERvb3JTZXJ2ZXI",
        f"Motion detected on front door @ {dt.datetime.now()}".encode(encoding='utf-8')
    )
