//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGFiloLayer.h>

@protocol NSObject><NSCopying><NSCoding;

@interface IGFiloCacheMultiplexingLayer : IGFiloLayer
{
    IGFiloLayer *_storingLayer;
    IGFiloLayer *_cachingLayer;
    id <NSObject><NSCopying><NSCoding> _notFoundMarker;
}

- (void).cxx_destruct;
- (void)flushAttributedTo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendValue:(id)arg1 forKey:(id)arg2 attributedTo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)receiveValueForKey:(id)arg1 attributedTo:(id)arg2 error:(id *)arg3;
- (_Bool)containsKey:(id)arg1 attributedTo:(id)arg2;
- (id)allKeysAttributedTo:(id)arg1;
- (id)initWithIdentifier:(id)arg1 storingLayer:(id)arg2 cachingLayer:(id)arg3 notFoundMarker:(id)arg4;

@end

