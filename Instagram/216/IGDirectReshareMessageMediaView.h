//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface IGDirectReshareMessageMediaView : UIView
{
    NSArray *_mediaViews;
    double _thumbnailSize;
}

- (void).cxx_destruct;
@property(nonatomic) double thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, copy, nonatomic) NSArray *mediaViews; // @synthesize mediaViews=_mediaViews;
- (void)reset;
- (void)configureWithViewModel:(id)arg1 module:(id)arg2;
- (void)layoutSubviews;
- (void)_setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

