//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMedia, UIImage;

@interface IGFeedItemPreviewObject : NSObject
{
    UIImage *_placeholderImage;
    IGMedia *_media;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGMedia *media; // @synthesize media=_media;
@property(readonly, nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(readonly, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
- (id)initWithPlaceholderImage:(id)arg1 sourceRect:(struct CGRect)arg2 media:(id)arg3;

@end
