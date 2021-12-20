//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface IGShoppingHomeSurveyController : NSObject
{
    NSString *_shoppingSessionId;
    NSDate *_surveyEntryDate;
    double _surveyTimeSpent;
}

- (void).cxx_destruct;
- (id)_contextData;
- (void)_reset;
- (void)_tryToLaunchSurveyForUserSession:(id)arg1;
- (void)markExitForUserSession:(id)arg1;
- (void)stopTimeSpent;
- (void)startTimeSpent;
- (void)markEntryForShoppingSessionId:(id)arg1;

@end

