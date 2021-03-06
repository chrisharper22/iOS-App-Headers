//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGImageLoggingIdentifier;

@interface IGImageLoggingInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isAd;
    _Bool _isCarousel;
    IGImageLoggingIdentifier *_identifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isCarousel; // @synthesize isCarousel=_isCarousel;
@property(readonly, nonatomic) _Bool isAd; // @synthesize isAd=_isAd;
@property(readonly, copy, nonatomic) IGImageLoggingIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isAd:(_Bool)arg2 isCarousel:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

