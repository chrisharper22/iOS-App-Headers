//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface IGStoryReelOwnerViewLayoutSpec : NSObject
{
    double _ringImagePadding;
    UIColor *_badgeViewBorderColor;
    struct CGSize _imageSize;
    struct CGSize _badgeViewSize;
    struct CGPoint _badgeViewOffset;
}

+ (id)multiAuthorStoryOptionViewSpec;
+ (id)hashtagHeaderViewSpec;
+ (id)reelOwnerNavigationBarSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *badgeViewBorderColor; // @synthesize badgeViewBorderColor=_badgeViewBorderColor;
@property(readonly, nonatomic) double ringImagePadding; // @synthesize ringImagePadding=_ringImagePadding;
@property(readonly, nonatomic) struct CGPoint badgeViewOffset; // @synthesize badgeViewOffset=_badgeViewOffset;
@property(readonly, nonatomic) struct CGSize badgeViewSize; // @synthesize badgeViewSize=_badgeViewSize;
@property(readonly, nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (id)initWithImageSize:(struct CGSize)arg1 badgeViewSize:(struct CGSize)arg2 badgeViewOffset:(struct CGPoint)arg3 ringImagePadding:(double)arg4 badgeViewBorderColor:(id)arg5;

@end

