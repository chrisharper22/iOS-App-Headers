//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGTextRowViewModel;

@interface IGDBusinessToolsEntryPointRowModel : NSObject
{
    IGTextRowViewModel *_rowViewModel;
    long long _toolType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long toolType; // @synthesize toolType=_toolType;
@property(readonly, nonatomic) IGTextRowViewModel *rowViewModel; // @synthesize rowViewModel=_rowViewModel;
- (id)initWithRowViewModel:(id)arg1 toolType:(long long)arg2;

@end

