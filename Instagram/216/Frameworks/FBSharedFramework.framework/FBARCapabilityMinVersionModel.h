//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBARCapabilityMinVersionModel : FBValueObject <NSCopying, NSCoding>
{
    NSString *_ARCapabilityName;
    long long _ARCapabilityMinVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long ARCapabilityMinVersion; // @synthesize ARCapabilityMinVersion=_ARCapabilityMinVersion;
@property(readonly, copy, nonatomic) NSString *ARCapabilityName; // @synthesize ARCapabilityName=_ARCapabilityName;
- (id)initWithARCapabilityName:(id)arg1 ARCapabilityMinVersion:(long long)arg2;

@end

