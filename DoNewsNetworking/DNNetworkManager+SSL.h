//
//  DNNetworkManager+SSL.h
//  DoNewsNetworking
//
//  Created by Ming on 2018/9/11.
//  Copyright © 2018 DoNews. All rights reserved.
//

#import "DNNetworkManager.h"
#import <AFNetworking.h>

@interface DNNetworkManager (SSL)

+ (AFSecurityPolicy*)customSecurityPolicy;
+ (void)checkCredential:(AFURLSessionManager *)manager;

@end
