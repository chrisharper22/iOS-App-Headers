//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol IGRapidFeedbackControlling <NSObject>
- (void)tryToShowSurvey;
- (void)tryToShowSurveyWithDialogPresented:(void (^)(void))arg1 noDialogPresented:(void (^)(void))arg2 dialogCancelled:(void (^)(void))arg3 failureHandler:(void (^)(void))arg4 surveyDismissed:(void (^)(void))arg5;
@end
