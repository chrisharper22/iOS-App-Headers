//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGSignalsObjectType-Protocol.h>

@class NSString;
@protocol IGSignalEmitDelegate;

@interface IGSignal : NSObject <IGSignalsObjectType>
{
    id <IGSignalEmitDelegate> _emitDelegate;
    _Bool _stackable;
    NSString *_feature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool stackable; // @synthesize stackable=_stackable;
@property(readonly, nonatomic) NSString *feature; // @synthesize feature=_feature;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)emit;
- (id)initWithFeatureName:(id)arg1 emitDelegate:(id)arg2 stackable:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
