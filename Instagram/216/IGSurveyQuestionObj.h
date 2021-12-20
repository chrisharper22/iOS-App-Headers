//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IGSurveyQuestionObj : NSObject
{
    _Bool _allowWriteInResponse;
    _Bool _isRequired;
    long long _questionID;
    NSString *_questionTitle;
    NSString *_message;
    NSArray *_responseOptions;
    NSArray *_surveyTokenParams;
    NSString *_questionClass;
    NSString *_customQuestionType;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *customQuestionType; // @synthesize customQuestionType=_customQuestionType;
@property(readonly, copy, nonatomic) NSString *questionClass; // @synthesize questionClass=_questionClass;
@property(readonly, nonatomic) _Bool isRequired; // @synthesize isRequired=_isRequired;
@property(readonly, nonatomic) _Bool allowWriteInResponse; // @synthesize allowWriteInResponse=_allowWriteInResponse;
@property(readonly, copy, nonatomic) NSArray *surveyTokenParams; // @synthesize surveyTokenParams=_surveyTokenParams;
@property(readonly, copy, nonatomic) NSArray *responseOptions; // @synthesize responseOptions=_responseOptions;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *questionTitle; // @synthesize questionTitle=_questionTitle;
@property(readonly, nonatomic) long long questionID; // @synthesize questionID=_questionID;
- (id)initWithQuestionID:(long long)arg1 questionTitle:(id)arg2 message:(id)arg3 responseOptions:(id)arg4 surveyTokenParams:(id)arg5 allowWriteInResponse:(_Bool)arg6 isRequired:(_Bool)arg7 questionClass:(id)arg8 customQuestionType:(id)arg9;

@end
