//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>

@class NSString;

@interface IGMusicLyricsStickerTapModelObject : NSObject <NSCoding>
{
    long long _displayType;
}

@property(readonly, nonatomic) long long displayType; // @synthesize displayType=_displayType;
- (id)sharingInfo;
@property(readonly, copy, nonatomic) NSString *pk;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayTypeString:(id)arg1;
- (id)initWithDisplayType:(long long)arg1;

@end

