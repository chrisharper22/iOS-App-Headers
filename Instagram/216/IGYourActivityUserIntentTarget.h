//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBIntentTarget-Protocol.h"

@class NSString;

@interface IGYourActivityUserIntentTarget : NSObject <FBIntentTarget>
{
    unsigned long long _entryPoint;
    long long _selectedTab;
}

@property(readonly, nonatomic) long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(readonly, nonatomic) unsigned long long entryPoint; // @synthesize entryPoint=_entryPoint;
- (id)initWithEntryPoint:(unsigned long long)arg1 selectedTab:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

