//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MinsClosure : NSObject
{
    struct shared_ptr<mins::FunctionCode> _fc;
    NSArray *_boundArgs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *boundArgs; // @synthesize boundArgs=_boundArgs;
@property(readonly, nonatomic) const void *sharedFC;
@property(readonly, nonatomic) struct FunctionCode *fc;
- (id)init:(const void *)arg1 boundArgs:(id)arg2;

@end
