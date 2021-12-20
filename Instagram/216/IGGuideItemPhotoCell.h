//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IGImageProgressViewDelegate-Protocol.h"

@class IGGuideItemAttributionOverlay, IGImageProgressView, NSString;
@protocol IGGuideItemPhotoCellDelegate;

@interface IGGuideItemPhotoCell : UICollectionViewCell <IGImageProgressViewDelegate>
{
    IGImageProgressView *_imageView;
    IGGuideItemAttributionOverlay *_attributionOverlay;
    id <IGGuideItemPhotoCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGGuideItemPhotoCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGGuideItemAttributionOverlay *attributionOverlay; // @synthesize attributionOverlay=_attributionOverlay;
@property(readonly, nonatomic) IGImageProgressView *imageView; // @synthesize imageView=_imageView;
- (void)progressImageView:(id)arg1 didFailLoadWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)progressImageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)progressImageView:(id)arg1 didLoadImage:(id)arg2 loadSource:(id)arg3 networkRequestSummary:(id)arg4;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
