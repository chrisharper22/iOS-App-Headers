//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSDictionary, NSString;

@interface IGObjectCacheConsolidator : NSObject <NSKeyedUnarchiverDelegate>
{
    NSDictionary *_consolidators;
}

- (void).cxx_destruct;
- (id)consolidatorForClass:(Class)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)initWithConsolidators:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

