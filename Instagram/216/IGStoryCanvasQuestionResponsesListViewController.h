//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGQuestionAnswerStickerSingleResponseSectionControllerDelegate-Protocol.h"
#import "IGStoryCanvasSeeAllHeaderSectionControllerDelegate-Protocol.h"
#import "IGStoryRespondersListViewControllerDelegate-Protocol.h"

@class IGQuestionAnswerStickerModel, IGStoryRespondersListViewController, IGUserSession, NSString;
@protocol IGStoryCanvasQuestionResponsesListViewControllerDelegate;

@interface IGStoryCanvasQuestionResponsesListViewController : UIViewController <IGStoryRespondersListViewControllerDelegate, IGStoryCanvasSeeAllHeaderSectionControllerDelegate, IGQuestionAnswerStickerSingleResponseSectionControllerDelegate, IGAnalyticsModule, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGQuestionAnswerStickerModel *_questionAnswerSticker;
    IGStoryRespondersListViewController *_listViewController;
    id <IGStoryCanvasQuestionResponsesListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGStoryCanvasQuestionResponsesListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)analyticsModule;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)seeAllHeaderSectionControllerDidTapCancelButton:(id)arg1;
- (void)storyRespondersListViewController:(id)arg1 didSelectQuestionResponder:(id)arg2 withResponders:(id)arg3;
- (void)questionAnswerStickerSingleResponseSectionController:(id)arg1 didSelectQuestionResponder:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 questionAnswerSticker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

