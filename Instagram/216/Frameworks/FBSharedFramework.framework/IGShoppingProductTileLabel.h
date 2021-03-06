//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGShoppingProductTileLabelLayoutContent;

@interface IGShoppingProductTileLabel : FBValueObject <NSCopying, NSCoding>
{
    long long _labelType;
    IGShoppingProductTileLabelLayoutContent *_layoutContent;
}

+ (id)valueWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) IGShoppingProductTileLabelLayoutContent *layoutContent; // @synthesize layoutContent=_layoutContent;
@property(readonly, nonatomic) long long labelType; // @synthesize labelType=_labelType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithLabelType:(long long)arg1 layoutContent:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

