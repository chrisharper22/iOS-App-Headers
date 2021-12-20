//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <FBSharedFramework/IGCoreTextLinkHandler-Protocol.h>

@class IGCoreTextView, IGSwitch, IGTitleAndToggleViewModel, NSString, UILabel;
@protocol IGTitleAndToggleCellDelegate;

@interface IGTitleAndToggleCell : UICollectionViewCell <IGCoreTextLinkHandler>
{
    UILabel *_titleLabel;
    IGCoreTextView *_subTitleLabel;
    IGSwitch *_switchView;
    IGTitleAndToggleViewModel *_viewModel;
    id <IGTitleAndToggleCellDelegate> _delegate;
}

+ (id)viewModelWithCalculatedHeightForConstrainedWidth:(double)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTitleAndToggleCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)coreTextView:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)_announceSwitchUpdateValue:(_Bool)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)configureWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

