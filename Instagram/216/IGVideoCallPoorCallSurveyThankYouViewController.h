//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGGestureHandler-Protocol.h"
#import "IGVideoCallPoorCallSurveyThankYouViewDelegate-Protocol.h"

@class IGVideoCallPoorCallSurveyThankYouView, NSString;
@protocol IGVideoCallPoorCallSurveyDelegate;

@interface IGVideoCallPoorCallSurveyThankYouViewController : UIViewController <IGVideoCallPoorCallSurveyThankYouViewDelegate, IGGestureHandler>
{
    id <IGVideoCallPoorCallSurveyDelegate> _delegate;
    IGVideoCallPoorCallSurveyThankYouView *_thanksView;
}

- (void).cxx_destruct;
- (void)thankYouViewDidTapDoneButton:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

