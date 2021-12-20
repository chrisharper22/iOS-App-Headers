//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageProgressViewDelegate-Protocol.h"
#import "IGLeadGenCollectionViewDynamicSizingCell-Protocol.h"

@class IGGradientView, IGImageProgressView, NSString, UILabel, UIView;

@interface IGLeadGenFormInfoCell : UICollectionViewCell <IGImageProgressViewDelegate, IGLeadGenCollectionViewDynamicSizingCell>
{
    IGImageProgressView *_heroMediaView;
    IGGradientView *_mediaBackgroundGradientView;
    UIView *_profileImage;
    UILabel *_pageNameView;
    UILabel *_titleView;
    UIView *_pageInfoView;
}

- (void).cxx_destruct;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (struct CGSize)_titleViewSizeWithConstrainingSize:(struct CGSize)arg1;
- (struct CGSize)_pageNameViewSizeWithConstrainingSize:(struct CGSize)arg1;
- (struct CGSize)dynamicSizeWithConstrainingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
