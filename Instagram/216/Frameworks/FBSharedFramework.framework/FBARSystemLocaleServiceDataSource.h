//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBARLocaleServiceDataSource-Protocol.h>

@class NSString;

@interface FBARSystemLocaleServiceDataSource : NSObject <FBARLocaleServiceDataSource>
{
    struct mutex _accessMutex;
    NSString *_deviceLocaleIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_discardCachedLocale;
@property(readonly, copy, nonatomic) NSString *deviceLocaleIdentifier; // @synthesize deviceLocaleIdentifier=_deviceLocaleIdentifier;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
