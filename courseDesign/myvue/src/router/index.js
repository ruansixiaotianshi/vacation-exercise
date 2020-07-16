import Vue from 'vue'
import VueRouter from 'vue-router'
import UsersManage from '../views/UsersManage'
import AddUsers from '../views/AddUsers'
import Index from '../views/Index'
import UserUpdate from '../views/UserUpdate'
import DataManage from "../views/DataManage";
import DataView from "../views/DataView";
import DataUpdate from "../views/DataUpdate";
import Login from "../views/Login";
import Register from "../views/Register";

Vue.use(VueRouter)

const routes = [

  {
    path:"/",
    name:"系统登陆",
    //component:Index,
    //show:true,
    redirect:"/Login"

  },
  {path: '/Login', name: 'Login', component: Login},
  {path: '/Register', name: 'Register', component: Register},
  {
    path:"/",
    name:"用户管理",
    component:Index,
    show:true,
    redirect:"/UsersManage",
    children:[
      {
        path:"/UsersManage",
        name:"用户信息",
        component:UsersManage
      },
      // {
      //   path:"/AddUsers",
      //   name:"添加用户",
      //   component:AddUsers
      // }
    ]
  },
  {
    path:"/",
    name:"数据管理",
    component:Index,
    show:true,
    redirect:"/DataManage",
    children:[
      {
        path:"/DataManage",
        name:"模型管理",
        component:DataManage
      },
      {
        path:"/DataView",
        name:"数据查看",
        component:DataView
      },

      // ,
      // {
      //   path:"/DataUpdate",
      //   name:"数据更新",
      //   component:DataUpdate
      // }
    ]
  },
//   {
//
//     path: '/Loginout',
//     name: "退出登录",
//     component: Loginout,
// show:true,
//     children: [
//       {
//         path:"/Loginout",
//         name:"退出登录",
//         component:Loginout
//       }
//     ]
//   },
  {
    path:'/UserUpdate',
    component:UserUpdate,
    show:false
  },
  {
    path:'/DataUpdate',
    component:DataUpdate,
    show:false
  },


    ]


const router = new VueRouter({
  mode: 'history',
  base: process.env.BASE_URL,
  routes
})

export default router
