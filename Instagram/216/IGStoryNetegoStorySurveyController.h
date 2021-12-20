//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGSimpleActionPresentableViewerDelegate-Protocol.h"
#import "IGStoryNetegoController-Protocol.h"
#import "IGStoryNetegoStorySurveyViewLoggingDelegate-Protocol.h"

@class IGStoryNetegoModel, IGStoryNetegoStorySurveyView, IGUserSession, NSString, UIView;
@protocol IGStoryPlayerMediaViewType;

@interface IGStoryNetegoStorySurveyController : NSObject <IGStoryNetegoStorySurveyViewLoggingDelegate, IGStoryNetegoController, IGSimpleActionPresentableViewerDelegate>
{
    IGStoryNetegoModel *_netegoModel;
    IGStoryNetegoStorySurveyView *_surveyView;
    IGUserSession *_userSession;
    NSString *_analyticsModule;
}

- (void).cxx_destruct;
- (void)storyNetegoStorySurveyViewLogContinueButtonTap:(id)arg1;
- (void)simpleActionPresentableViewerWillFinish:(id)arg1;
- (void)simpleActionPresentableViewerDidFinish:(id)arg1;
@property(readonly, nonatomic) UIView<IGStoryPlayerMediaViewType> *mediaView;
- (void)logFollowButtonTappedFromUserSheetUser:(id)arg1 action:(long long)arg2;
- (void)didTapHeaderDismissButton;
- (void)didEndShowingUnit;
- (void)willBeginShowingUnit;
- (void)didTapShuffleButton;
- (void)didHideNetegoUnit;
- (void)didTapOnMoreOptionButton;
- (void)didTapUserObject:(id)arg1 confirmed:(_Bool)arg2;
- (void)handleOverlayTapActionWithObject:(id)arg1 hostViewController:(id)arg2;
- (id)initWithNetegoModel:(id)arg1 userSession:(id)arg2 analyticsModule:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

