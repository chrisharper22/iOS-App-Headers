//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface IGKVOObserver : NSObject
{
    id _object;
    NSString *_keypath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *keypath; // @synthesize keypath=_keypath;
@property(readonly, nonatomic) id object; // @synthesize object=_object;
- (id)observeOnMainWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)observeWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2 deliverOn:(id)arg3;
- (id)observeWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (id)observeOnMain:(CDUnknownBlockType)arg1;
- (id)observe:(CDUnknownBlockType)arg1 deliverOn:(id)arg2;
- (id)observe:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1 keypath:(id)arg2;

@end

