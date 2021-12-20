//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGFeedItemTagsViewDelegate-Protocol.h"

@class IGFeedItemTagsView, NSString;
@protocol IGFeedItemTagsViewDelegate;

@interface IGFeedItemTagsCell : UICollectionViewCell <IGFeedItemTagsViewDelegate>
{
    IGFeedItemTagsView *_tagsView;
    id <IGFeedItemTagsViewDelegate> _delegate;
}

+ (double)height;
- (void).cxx_destruct;
@property(nonatomic) __weak id <IGFeedItemTagsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)feedItemTagsView:(id)arg1 didSelectModel:(id)arg2;
- (void)configureWithModels:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

