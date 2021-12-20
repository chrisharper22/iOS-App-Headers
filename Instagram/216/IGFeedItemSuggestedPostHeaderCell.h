//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGCoreTextLinkHandler-Protocol.h"
#import "IGFeedItemSuggestedPostHeaderCellType-Protocol.h"

@class FBTimer, IGCoreTextView, IGFeedItemHeaderButtonGroup, IGTapButton, IGTooltipView, NSString, UIView;
@protocol IGFeedItemSuggestedPostHeaderCellDelegate;

@interface IGFeedItemSuggestedPostHeaderCell : UICollectionViewCell <IGCoreTextLinkHandler, IGFeedItemSuggestedPostHeaderCellType>
{
    IGCoreTextView *_coreTextView;
    UIView *_accessoryView;
    IGFeedItemHeaderButtonGroup *_accessoryButtonGroup;
    IGTapButton *_notInterestedButton;
    IGTapButton *_interestedButton;
    UIView *_container;
    _Bool _showInterestedButton;
    _Bool _canStartDwellTimer;
    IGTooltipView *_controlsNUX;
    FBTimer *_dwellTimer;
    _Bool _didShowNUX;
    _Bool _isInterested;
    id <IGFeedItemSuggestedPostHeaderCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemSuggestedPostHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_onInterestedButtonTapped:(id)arg1;
- (void)_onNotInterestedButtonTapped:(id)arg1;
- (void)_setAccessoryView:(id)arg1;
- (id)_accessoryButtonGroup;
- (id)_interestedButton;
- (void)_showControlsNUXWithUserPK:(id)arg1;
- (_Bool)_shouldShowControlsNUXWithUserPK:(id)arg1;
- (void)showControlsNUXIfNecessaryWithUserPK:(id)arg1;
- (void)_startDwellTimerIfNecessary;
- (void)_clearDwellTimer;
- (void)setVisibleFraction:(double)arg1;
- (void)configureWithStyledString:(id)arg1 showInterestedButton:(_Bool)arg2 isInterested:(_Bool)arg3 userPK:(id)arg4;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
