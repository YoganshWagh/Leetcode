# QUESTION: https://leetcode.com/problems/duplicate-emails/?lang=pythondata

import pandas as pd

def duplicate_emails(person: pd.DataFrame) -> pd.DataFrame:
    
    results = pd.DataFrame
    results = person.loc[person.duplicated(subset=['email']), ['email']]

    return results.drop_duplicates()
