//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFeedItemLocationInfo : NSObject
{
    struct CGSize _mediaSize;
    struct CGSize _contentAreaSize;
    struct CGPoint _locationInContentArea;
}

@property(nonatomic) struct CGPoint locationInContentArea; // @synthesize locationInContentArea=_locationInContentArea;
@property(nonatomic) struct CGSize contentAreaSize; // @synthesize contentAreaSize=_contentAreaSize;
@property(nonatomic) struct CGSize mediaSize; // @synthesize mediaSize=_mediaSize;
- (id)analyticsExtras;
- (id)initWithMediaSize:(struct CGSize)arg1 contentAreaSize:(struct CGSize)arg2 locationInContentArea:(struct CGPoint)arg3;

@end

