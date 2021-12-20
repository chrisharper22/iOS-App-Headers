//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGSharingUIKitCreationMetadataSubtitleRowDelegate-Protocol.h"

@class IGSharingUIKitCreationFlowToggle, IGSharingUIKitCreationMetadataSubtitleRow, IGSharingUIKitMetadataEditorSectionHeaderView, NSString;
@protocol IGTVMetadataEditorCaptionsCellDelegate;

@interface IGTVMetadataEditorCaptionsCell : UICollectionViewCell <IGSharingUIKitCreationMetadataSubtitleRowDelegate>
{
    IGSharingUIKitMetadataEditorSectionHeaderView *_sectionHeaderView;
    IGSharingUIKitCreationFlowToggle *_captionToggle;
    IGSharingUIKitCreationMetadataSubtitleRow *_subtitleRow;
    id <IGTVMetadataEditorCaptionsCellDelegate> _delegate;
}

+ (double)preferredHeightForWidth:(double)arg1 viewModel:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVMetadataEditorCaptionsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)metadataSubtitleRowDidTapLearnMore:(id)arg1;
- (void)_configureSubtitleRowWithViewModel:(id)arg1;
- (void)_toggleSwitchAction:(id)arg1;
- (void)setToggleOn:(_Bool)arg1;
- (void)setToggleEnabled:(_Bool)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

