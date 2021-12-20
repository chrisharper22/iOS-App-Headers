//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSSecureCoding-Protocol.h>

@class NSArray;

@interface IGGradient : NSObject <NSSecureCoding>
{
    NSArray *_colors;
    long long _direction;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)startAndEndColors;
- (id)initWithColors:(id)arg1;
- (id)initWithColors:(id)arg1 direction:(long long)arg2;

@end
