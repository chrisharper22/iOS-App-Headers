//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMetalSurfaceView, IGSurfaceView, UIImage, UIImageView;

@interface IGCoverScrubberThumbnailView : UIView
{
    UIView *_selectedThumbnailIndicatorContainerView;
    UIImage *_thumbnailImage;
    UIImageView *_thumbnailImageView;
    _Bool _useFbIgluFilters;
    IGSurfaceView *_igSelectedThumbnailIndicator;
    FBMetalSurfaceView *_fbSelectedThumbnailIndicator;
    struct CGSize _aspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FBMetalSurfaceView *fbSelectedThumbnailIndicator; // @synthesize fbSelectedThumbnailIndicator=_fbSelectedThumbnailIndicator;
@property(readonly, nonatomic) IGSurfaceView *igSelectedThumbnailIndicator; // @synthesize igSelectedThumbnailIndicator=_igSelectedThumbnailIndicator;
@property(nonatomic) struct CGSize aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (void)setSelectedThumbnailImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithUseFbIgluFilters:(_Bool)arg1 iglContext:(id)arg2 thumbnailSize:(struct CGSize)arg3;

@end
