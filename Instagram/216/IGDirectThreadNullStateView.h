//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGCoreTextLinkHandler-Protocol.h"

@class IGDirectAvatarView, IGDirectThreadLabelManager, IGDirectThreadNullStateViewModel, IGTextButton, NSMutableArray, NSString, UICollectionView, UIFont, UIImageView, UILabel;
@protocol IGDirectNullStateViewDelegate;

@interface IGDirectThreadNullStateView : UIView <IGCoreTextLinkHandler>
{
    IGDirectAvatarView *_avatarView;
    UILabel *_primaryDisplayName;
    UILabel *_secondaryDisplayText;
    NSMutableArray *_contextLinesLabels;
    IGTextButton *_button;
    UIImageView *_verifiedUserBadgeView;
    UIFont *_primaryFont;
    UIFont *_secondaryFont;
    IGDirectThreadNullStateViewModel *_viewModel;
    IGDirectThreadLabelManager *_threadLabelManager;
    UICollectionView *_threadLabelsView;
    id <IGDirectNullStateViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectNullStateViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didTapButton;
- (void)_updateViewWithThreadLabels;
- (void)_setupThreadLabelManagerIfNeeded:(id)arg1;
- (void)_setupSubviews;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1 userFeatureSets:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

