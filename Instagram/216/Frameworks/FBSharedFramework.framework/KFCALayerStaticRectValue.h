//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/KFCALayerActionProtocol-Protocol.h>

@class NSString;

@interface KFCALayerStaticRectValue : NSObject <KFCALayerActionProtocol>
{
    struct CGRect _value;
    unsigned long long _property;
}

- (void)applyValueToLayer:(id)arg1;
- (id)initWithValue:(struct CGRect)arg1 property:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

