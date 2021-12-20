//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPayFormViewLayoutInfo : FBValueObject <NSCopying, NSCoding>
{
    NSString *_identifier;
    double _widthRatio;
    long long _col;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long col; // @synthesize col=_col;
@property(readonly, nonatomic) double widthRatio; // @synthesize widthRatio=_widthRatio;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 widthRatio:(double)arg2 col:(long long)arg3;

@end

