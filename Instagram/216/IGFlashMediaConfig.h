//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGFlashMediaConfig : NSObject
{
    unsigned long long _mediasInMemoryLimit;
    unsigned long long _mediasOnDiskLimit;
}

@property(readonly, nonatomic) unsigned long long mediasOnDiskLimit; // @synthesize mediasOnDiskLimit=_mediasOnDiskLimit;
@property(readonly, nonatomic) unsigned long long mediasInMemoryLimit; // @synthesize mediasInMemoryLimit=_mediasInMemoryLimit;
- (id)initWithMediasInMemoryLimit:(unsigned long long)arg1 mediasOnDiskLimit:(unsigned long long)arg2;

@end
