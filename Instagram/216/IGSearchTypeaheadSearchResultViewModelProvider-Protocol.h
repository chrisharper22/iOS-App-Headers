//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGSearchResultDataModel, IGUserSession, NSString;
@protocol IGSearchServerResultViewModelProtocol;

@protocol IGSearchTypeaheadSearchResultViewModelProvider <NSObject>
- (id <IGSearchServerResultViewModelProtocol>)viewModelWithDataModel:(IGSearchResultDataModel *)arg1 sourceType:(unsigned long long)arg2 userSession:(IGUserSession *)arg3 analyticsModule:(NSString *)arg4;
@end

