//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGroupedTableViewCell.h>

@class CALayer, IGListHeaderView, IGStoryLinkCreationPreviewCell;

@interface IGStoryBusinessTransactionLinksCreationFormCell : IGGroupedTableViewCell
{
    IGListHeaderView *_headerView;
    IGStoryLinkCreationPreviewCell *_storyPreviewCell;
    CALayer *_separatorLayer;
}

- (void).cxx_destruct;
- (double)_getHeightToMaintainAspectRatioForWidth:(double)arg1;
- (double)_storyPreviewWidth;
- (double)preferredHeight;
- (void)refreshStoryPreview:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 headerTitle:(id)arg3 storyScreenshot:(id)arg4;

@end

