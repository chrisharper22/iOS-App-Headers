//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGSimpleActionViewDelegate-Protocol.h"

@class IGGenericSurveyEndingScreenContext, IGUserSession, NSString, UIView;
@protocol IGSimpleActionPresentableViewerDelegate;

@interface IGGenericSurveyEndingScreenViewController : IGViewController <IGSimpleActionViewDelegate>
{
    IGGenericSurveyEndingScreenContext *_context;
    IGUserSession *_userSession;
    NSString *_surveyType;
    NSString *_pageId;
    UIView *_contentView;
    id <IGSimpleActionPresentableViewerDelegate> _simpleActionDelegate;
    NSString *_surveySessionId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *surveySessionId; // @synthesize surveySessionId=_surveySessionId;
@property(nonatomic) __weak id <IGSimpleActionPresentableViewerDelegate> simpleActionDelegate; // @synthesize simpleActionDelegate=_simpleActionDelegate;
- (void)simpleActionViewDidTapDismissButton:(id)arg1;
- (void)simpleActionViewDidTapStartButton:(id)arg1 withSimpleAction:(id)arg2;
- (void)_didTapDoneButton;
- (void)_setupContentView;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithContext:(id)arg1 surveyType:(id)arg2 pageId:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

