//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBIvarBasedEqualityObject.h>

@interface IGShoppingReconsiderationDataSourceProviderUpdateType : FBIvarBasedEqualityObject
{
    unsigned long long _subtype;
    long long _network_action;
}

+ (id)networkWithAction:(long long)arg1;
+ (id)local;
- (void)matchLocal:(CDUnknownBlockType)arg1 network:(CDUnknownBlockType)arg2;

@end

