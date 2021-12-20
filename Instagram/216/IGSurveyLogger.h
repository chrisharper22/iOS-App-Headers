//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGAnalyticsEventLoggingProtocol;

@interface IGSurveyLogger : NSObject
{
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)brandLiftQuestionDidDismiss:(id)arg1;
- (void)brandLiftSurveyPrimerViewDidDismissWithSurvey:(id)arg1 response:(_Bool)arg2;
- (void)brandLiftSurveyAnswered:(id)arg1 question:(id)arg2 answers:(id)arg3;
- (void)brandLiftSurveyWillAppear:(id)arg1;
- (void)surveyPrimerViewDidDismissWithQuestion:(id)arg1 hasResponse:(_Bool)arg2;
- (void)surveyAnsweredWithQuestion:(id)arg1 surveyAnswer:(id)arg2;
- (void)surveyWillAppearWithQuestion:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

