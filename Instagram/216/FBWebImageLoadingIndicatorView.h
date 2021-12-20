//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBWebImageViewListener-Protocol.h"

@class NSString, UIActivityIndicatorView;

@interface FBWebImageLoadingIndicatorView : UIView <FBWebImageViewListener>
{
    UIActivityIndicatorView *_simpleSpinnerView;
}

- (void).cxx_destruct;
- (void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2;
- (void)webImageView:(id)arg1 didSetImageFromResponse:(id)arg2 forImageSpecifier:(id)arg3;
- (void)webImageView:(id)arg1 willStartDownloadingSpecifier:(id)arg2 withDownloaderName:(id)arg3 requestId:(id)arg4;
- (void)layoutSubviews;
- (id)initWithImageView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

