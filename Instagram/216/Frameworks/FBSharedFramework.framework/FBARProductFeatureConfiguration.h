//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@interface FBARProductFeatureConfiguration : NSObject <NSSecureCoding>
{
    struct ProductFeatureConfig _cxxConfig;
}

+ (_Bool)supportsSecureCoding;
+ (id)newWithRetouchingEnabled:(_Bool)arg1;
+ (id)new;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) struct ProductFeatureConfig cxxConfiguration;
- (id)initWithCxxConfiguration:(struct ProductFeatureConfig)arg1;
- (id)init;

@end

