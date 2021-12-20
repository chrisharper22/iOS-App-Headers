//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface PXCheckoutScreenComponentData : FBValueObject <NSCopying, NSCoding>
{
    _Bool _refreshOnChange;
    unsigned long long _componentType;
}

@property(readonly, nonatomic) _Bool refreshOnChange; // @synthesize refreshOnChange=_refreshOnChange;
@property(readonly, nonatomic) unsigned long long componentType; // @synthesize componentType=_componentType;
- (id)initWithComponentType:(unsigned long long)arg1 refreshOnChange:(_Bool)arg2;

@end
