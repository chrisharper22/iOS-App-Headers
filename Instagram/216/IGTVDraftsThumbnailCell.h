//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGDelayedBouncyCollectionViewCell.h>

@class IGTVDraftsThumbnailView;

@interface IGTVDraftsThumbnailCell : IGDelayedBouncyCollectionViewCell
{
    IGTVDraftsThumbnailView *_thumbnailView;
    struct UIEdgeInsets _insets;
}

+ (struct CGSize)preferredSizeForWidth:(double)arg1 insets:(struct UIEdgeInsets)arg2;
- (void).cxx_destruct;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

