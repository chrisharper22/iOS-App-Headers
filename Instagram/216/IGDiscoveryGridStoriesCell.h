//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDiscoveryGridFeedItemVideoCell.h"

@class IGImageView, UIView;
@protocol IGDiscoveryGridStoriesCellOverlayType;

@interface IGDiscoveryGridStoriesCell : IGDiscoveryGridFeedItemVideoCell
{
    IGImageView *_imageView;
    UIView<IGDiscoveryGridStoriesCellOverlayType> *_overlayView;
}

- (void).cxx_destruct;
- (void)_createImageViewIfNeeded;
- (void)configureWithStory:(id)arg1 userSession:(id)arg2 loggingProvider:(id)arg3 avatarViewModel:(id)arg4 layoutStyle:(long long)arg5 containerType:(long long)arg6 title:(id)arg7;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
- (id)image;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

