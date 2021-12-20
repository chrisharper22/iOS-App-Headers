//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSArray;

@interface FBARNativeUIControlServicePickerConfiguration : FBValueObject <NSCopying, NSCoding>
{
    unsigned long long _selectedIndex;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (id)initWithSelectedIndex:(unsigned long long)arg1 items:(id)arg2;

@end

