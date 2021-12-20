//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGUserSession, NSMutableDictionary;

@interface IGGenericSurveyLoggingContext : NSObject
{
    IGUserSession *_userSession;
    NSMutableDictionary *_defaultExtraDict;
    unsigned long long _type;
}

- (void).cxx_destruct;
- (void)_logtWithEventSuffix:(id)arg1 extraDict:(id)arg2;
- (void)logExitEventWithPageID:(id)arg1 timeSpent:(double)arg2 questionID:(id)arg3;
- (void)logInvitationImpressionWithPageID:(id)arg1;
- (void)logSkipQuestionWithPageID:(id)arg1 skippedQuestionID:(id)arg2 timeSpent:(double)arg3;
- (void)logSkipButtonTappedWithPageID:(id)arg1 timeSpent:(double)arg2;
- (void)logSurveyDesignatedEntryPointClickEventWithPageID:(id)arg1 timeSpent:(double)arg2;
- (void)logPageResultWithPageID:(id)arg1 results:(id)arg2 timeSpent:(double)arg3 extraDict:(id)arg4;
- (id)initWithUserSession:(id)arg1 surveyID:(id)arg2 type:(unsigned long long)arg3 extraDict:(id)arg4;

@end

