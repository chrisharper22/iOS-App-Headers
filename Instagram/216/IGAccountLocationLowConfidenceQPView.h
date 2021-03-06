//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGAccountLocationTransparencyViewV1, IGBottomButtonsView, IGCoreTextView, IGNavigationBar, NSString, UIScrollView;
@protocol IGAccountLocationLowConfidenceQPViewDelegate;

@interface IGAccountLocationLowConfidenceQPView : UIView <IGCoreTextLinkHandler>
{
    IGNavigationBar *_navigationBar;
    UIScrollView *_scrollView;
    UIView *_contentView;
    IGCoreTextView *_headlineView;
    IGCoreTextView *_explainView;
    IGCoreTextView *_bodyView;
    UIView *_previewView;
    IGCoreTextView *_previewExplanationView;
    IGAccountLocationTransparencyViewV1 *_bottomSheetView;
    IGBottomButtonsView *_bottomButtonsView;
    id <IGAccountLocationLowConfidenceQPViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGAccountLocationLowConfidenceQPViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onBottomPrimaryButtonTapped;
- (void)_onCloseTapped;
- (void)configureWithUsername:(id)arg1 fullName:(id)arg2 profileImageURL:(id)arg3 isLocationTurnedOn:(_Bool)arg4 analyticsModule:(id)arg5;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_updateBodyViewWithString:(id)arg1;
- (void)_updateExplainViewWithString:(id)arg1;
- (void)_createBottomButtonsViewWithIsLocationTurnedOn:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

