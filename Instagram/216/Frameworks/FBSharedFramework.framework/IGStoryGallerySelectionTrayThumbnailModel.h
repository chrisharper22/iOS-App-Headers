//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIImage;

@interface IGStoryGallerySelectionTrayThumbnailModel : NSObject
{
    UIImage *_thumbnail;
    long long _thumbnailContentMode;
    NSArray *_backgroundGradientColors;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *backgroundGradientColors; // @synthesize backgroundGradientColors=_backgroundGradientColors;
@property(readonly, nonatomic) long long thumbnailContentMode; // @synthesize thumbnailContentMode=_thumbnailContentMode;
@property(readonly, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (id)initWithThumbnail:(id)arg1 thumbnailContentMode:(long long)arg2 backgroundGradientColors:(id)arg3;

@end

