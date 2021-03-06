//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGTransitionZoomFromCapable-Protocol.h"

@class IGGuide, IGGuidePreviewButton, IGInsetLayout, IGShareFooterView, IGShareSheetShareToRow, IGStackLayout, IGUserSession, NSArray, NSString, UIButton, UIView;
@protocol IGGuideShareSheetDelegate;

@interface IGGuideShareSheetViewController : IGViewController <IGTransitionZoomFromCapable>
{
    IGUserSession *_userSession;
    NSArray *_items;
    IGGuide *_guide;
    IGGuidePreviewButton *_guidePreviewButton;
    UIButton *_previewButton;
    UIView *_separatorView;
    IGShareSheetShareToRow *_shareToFeedRow;
    IGShareFooterView *_shareFooterView;
    IGStackLayout *_topContentLayout;
    IGInsetLayout *_bottomContentLayout;
    id <IGGuideShareSheetDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideShareSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)transitionZoomViewFromItem:(id)arg1 shouldMoveToVisiblePosition:(_Bool)arg2;
- (void)prepareTransitionZoomWithContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)shouldZoomFromTransition;
- (void)_saveAsDraftButtonTapped;
- (void)_shareButtonTapped;
- (void)_previewButtonTapped;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithGuide:(id)arg1 items:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

